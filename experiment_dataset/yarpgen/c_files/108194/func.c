/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108194
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((((((~(((/* implicit */int) (short)23099)))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23096))) ^ (var_11))) - (810993975835105463ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) var_3))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_17 = ((/* implicit */_Bool) var_1);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(var_0)));
                    var_18 = arr_3 [i_0] [i_1] [i_2];
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (short)-23099);
                    var_19 = ((/* implicit */int) var_12);
                    arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 761790492)) ? (((/* implicit */int) (short)23095)) : (((/* implicit */int) (short)-4316))))) ? (((/* implicit */int) ((unsigned short) (short)4316))) : ((~(((var_1) >> (((var_1) - (939692925)))))))));
                }
            }
            var_20 = ((/* implicit */short) 2042263392);
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            arr_14 [i_0] &= ((/* implicit */short) min((((long long int) var_11)), (((/* implicit */long long int) min((805306368), (((/* implicit */int) var_10)))))));
            var_21 = ((/* implicit */long long int) max(((~(var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_4])))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_3)) : (var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4316))))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_0)))))));
                arr_18 [i_5] [i_5] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_6 [i_5] [i_4] [i_4] [i_0]))))));
                var_23 = ((/* implicit */short) ((signed char) ((_Bool) (short)23098)));
            }
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
            {
                arr_22 [i_6] = ((/* implicit */unsigned short) (unsigned char)28);
                var_24 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0]);
            }
            for (short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) var_5);
                var_26 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_4] [i_7] [i_0]);
            }
        }
        var_27 = ((/* implicit */short) (+(((unsigned int) (short)4300))));
    }
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((/* implicit */short) ((min((1099444518912ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (279223176896970752ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) ((6501538928608702581ULL) < (11575586338270339055ULL))))))))));
        var_28 = -1404104241;
        arr_29 [i_8] [i_8] = ((/* implicit */short) ((((min((var_11), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) var_12)))))))) << (((/* implicit */int) min((min((var_10), (var_5))), (((/* implicit */short) (!(((/* implicit */_Bool) -1422941387441778242LL))))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) ((((min((((/* implicit */unsigned int) 1090052096)), (var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (var_8)));
        arr_31 [i_8] [i_8] = ((/* implicit */_Bool) (((~((~(var_11))))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)16128)) | (((/* implicit */int) (short)23099)))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_29 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4163659737U)) ? (var_7) : (814959710U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned int) 1090052096)) / (3480007593U))));
        var_30 = ((/* implicit */signed char) min(((-(((6501538928608702587ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) arr_33 [i_9])))))));
    }
}
