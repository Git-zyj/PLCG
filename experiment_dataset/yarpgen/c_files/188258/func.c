/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188258
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_1))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45809)))))), (((((/* implicit */_Bool) max(((short)-32756), ((short)-22666)))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19745)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (max(((((_Bool)1) ? (arr_0 [17LL] [17LL]) : (arr_0 [8] [i_0]))), (((((/* implicit */_Bool) (unsigned short)17183)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_5)))))) : ((+(((/* implicit */int) max((arr_1 [13LL]), (((/* implicit */signed char) var_5)))))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((short) (~(arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */short) min((((arr_4 [i_2] [i_1] [i_2]) ? (((/* implicit */int) arr_4 [i_2] [(unsigned short)2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))), (((((/* implicit */int) arr_4 [i_2] [i_1] [(unsigned short)4])) + (((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        arr_12 [(unsigned short)12] [i_0] [i_1] = ((/* implicit */unsigned int) arr_10 [i_1] [(unsigned short)15]);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = min((((/* implicit */unsigned short) ((arr_25 [i_4] [i_5] [i_6] [i_5]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6] [(unsigned short)9])) ? (((/* implicit */int) arr_2 [i_7] [i_4])) : (var_0))))))), (((unsigned short) (+(((/* implicit */int) arr_24 [i_4] [i_5] [i_5] [i_5] [i_7] [i_5]))))));
                        arr_26 [(unsigned short)5] [i_5] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [13] [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5])) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) arr_13 [i_6]))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_5] [i_5] [9U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [(signed char)6] [0])))))))))));
                        arr_27 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_5 [i_4] [i_5] [i_6] [i_5])))) || (((/* implicit */_Bool) var_0))));
                        var_17 = ((/* implicit */long long int) min(((unsigned short)1), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_2))))))))));
                        var_18 -= ((/* implicit */unsigned short) arr_15 [i_6]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((unsigned short) min((arr_7 [i_4] [18]), (((var_3) ? (((/* implicit */int) arr_6 [i_4] [i_4] [18LL] [i_4])) : (arr_7 [i_4] [(short)4]))))));
        var_20 = arr_1 [i_4];
    }
    var_21 |= ((/* implicit */signed char) var_3);
    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_7)), (var_10))))) : (var_1)));
}
