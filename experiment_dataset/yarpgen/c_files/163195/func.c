/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163195
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
    var_18 = ((/* implicit */unsigned short) max((min((var_8), (((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned char) (signed char)6))))))), (max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) (signed char)58)), (var_8)))))));
    var_19 = min((var_16), (((/* implicit */short) (!(((((/* implicit */int) var_16)) == (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 += max((((arr_4 [(unsigned char)4] [i_1]) << (((((arr_4 [6U] [i_1]) + (var_10))) - (264833150U))))), (((/* implicit */unsigned int) max((((/* implicit */short) max((var_11), (arr_2 [(unsigned short)4])))), ((short)-6158)))));
                var_21 = ((/* implicit */unsigned short) var_0);
                arr_5 [i_0] [i_1] = max((max((var_8), (((/* implicit */unsigned int) (short)25252)))), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), (arr_0 [i_0])))) + ((-(((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */short) var_15);
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [(unsigned char)17] [i_1] [i_2])), (var_17)))), (((((/* implicit */int) (signed char)58)) | (((/* implicit */int) max((arr_0 [i_0]), ((unsigned short)58730))))))));
                    var_24 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_3] = max(((short)112), ((short)-29003));
                    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) ((1840960440151859289LL) != (((/* implicit */long long int) 896479107U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) var_2);
                                var_27 -= ((/* implicit */unsigned char) arr_12 [i_5] [i_4] [i_3] [i_4] [i_3]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    arr_22 [(unsigned char)11] [(unsigned char)11] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) var_12)), (var_13)));
                    var_28 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_15))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_6] [i_8]);
                                var_30 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (unsigned short)27062)) | (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38473)) || (((/* implicit */_Bool) var_2))))))) <= (((/* implicit */int) var_17))));
                            }
                        } 
                    } 
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_31 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) * (((/* implicit */int) (unsigned char)121))));
                    var_33 = ((/* implicit */unsigned int) max(((unsigned short)58730), ((unsigned short)59223)));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_34 = min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) != (0LL)))), ((unsigned short)58730));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)201)) || (((((/* implicit */int) arr_13 [i_0])) == (((/* implicit */int) (short)0)))))))));
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [10U] [i_10] [(short)7]))));
                    }
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_0] = ((/* implicit */unsigned short) var_2);
                        var_37 = ((/* implicit */_Bool) (short)15291);
                        var_38 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (_Bool)0))))), (((((((/* implicit */int) var_14)) - (((/* implicit */int) arr_25 [i_0] [(_Bool)1])))) >> (((((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (63419))))) - (28199918)))))));
                        var_39 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((var_0), (((/* implicit */unsigned int) (unsigned char)192)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [(unsigned short)8] [10U] [0LL])) > (0LL))))))))) ^ (arr_35 [i_1] [i_1] [i_1] [(unsigned short)10])));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)32599)))))) * (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || (((((/* implicit */_Bool) (unsigned char)111)) || (((/* implicit */_Bool) 993004437U)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        var_41 = ((/* implicit */long long int) (unsigned short)6806);
                        var_42 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_12] [i_1])) - (((/* implicit */int) var_3)))) % (((/* implicit */int) var_1))));
                    }
                }
            }
        } 
    } 
}
