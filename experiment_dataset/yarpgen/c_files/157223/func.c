/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157223
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
    var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (var_10) : (-9223372036854775796LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) && ((!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54975))) == (var_7))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])) : (((int) (unsigned short)65024)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) (signed char)121);
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_4] [i_3] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)511))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_8))));
                            arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_0] [i_3] [i_0]))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_14 [i_5] [(_Bool)1] [i_2] [i_1] [i_0]))));
                            arr_16 [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]);
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_3] [i_3] [i_5])) ? (((/* implicit */unsigned int) var_2)) : (arr_13 [i_3] [i_3] [i_2] [i_3] [i_5])));
                            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -906435118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512))) : (arr_15 [i_0] [i_0] [i_2] [i_3])))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10822)))));
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((short) var_2)))));
                    }
                    arr_17 [(_Bool)1] [i_2] [7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_2)));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        arr_21 [14U] |= ((/* implicit */short) max((((((/* implicit */unsigned long long int) min((1577057654U), (((/* implicit */unsigned int) 810074034))))) ^ (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11330)) / (((/* implicit */int) (unsigned char)99)))))));
        arr_22 [i_6] = ((/* implicit */unsigned int) var_2);
    }
}
