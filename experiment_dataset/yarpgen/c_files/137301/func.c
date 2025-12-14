/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137301
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (max((2811149417583553955ULL), (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((+(((/* implicit */int) ((unsigned short) var_9)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) var_5);
                        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)126)), (arr_7 [i_1] [i_1] [i_0]))))));
                        var_19 += ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) var_4)), (12248912992047549244ULL)))))));
                    }
                } 
            } 
            var_20 *= arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1];
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_21 += ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_4])))));
            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (~(max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_4])))))) : (((/* implicit */int) ((short) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_5]))))));
            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) (unsigned short)32924)))))) << (((((/* implicit */_Bool) (unsigned short)6)) ? (((2147483647) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1) : (-1196982700)))) : (((unsigned long long int) arr_5 [i_5] [i_0])))))));
        }
    }
    var_24 = ((/* implicit */short) (unsigned char)0);
}
