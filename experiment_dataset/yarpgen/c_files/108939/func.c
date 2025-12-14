/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108939
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) (((-(5478438950302624721ULL))) <= (((((/* implicit */unsigned long long int) -1596673541)) ^ (8936830510563328ULL)))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (-1596673541) : (((/* implicit */int) (short)-11340)))) <= (((/* implicit */int) min(((signed char)-20), ((signed char)-23)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            var_11 = ((/* implicit */signed char) var_9);
                            arr_15 [i_0] [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) (~(var_4)));
                        }
                        for (int i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_16 [i_0])))) ? (((((/* implicit */_Bool) (signed char)64)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_0 + 3] [i_2] [i_2] [i_5 + 1])) ? (-1374720396) : (((/* implicit */int) (signed char)22))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) (signed char)79)))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)184)))))))));
                            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_6);
                        }
                        arr_20 [i_2] [i_0] = (-(((/* implicit */int) (_Bool)1)));
                        arr_21 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_1] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (signed char)24))) ? (((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91)))))) : (((/* implicit */int) (unsigned short)1))))), (max((((/* implicit */unsigned int) min((arr_16 [i_2]), (((/* implicit */int) (short)11339))))), (min((var_7), (arr_13 [i_0 - 3] [(_Bool)0] [i_0] [i_0] [i_2] [i_0])))))));
                        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((arr_13 [i_0] [i_2] [i_2] [i_3] [i_0] [i_3]), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))))) != (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) 8163728306586602087LL))))));
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_7) * (((/* implicit */unsigned int) var_8))))), (((var_5) * (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11340))) : (arr_8 [i_0 + 2] [i_0] [(_Bool)1] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (9489080138505976859ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((max((((((/* implicit */unsigned long long int) 8163728306586602071LL)) - (var_1))), (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_1])))) >> ((+(((2147483626) * (((/* implicit */int) (_Bool)0)))))))))));
                            var_16 = ((/* implicit */short) ((((((((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1])) | (((/* implicit */int) arr_9 [i_1 + 3] [i_1 - 3] [i_1 - 4] [i_1 - 4])))) + (2147483647))) << (((max((((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_0])) ? (5407598292327551042ULL) : (((/* implicit */unsigned long long int) 1208405792)))), (((/* implicit */unsigned long long int) max((0LL), (-1059142214361762886LL)))))) - (5407598292327551042ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */_Bool) var_9);
                            var_18 = (-2147483647 - 1);
                            arr_27 [i_0 - 3] [i_0 - 1] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 + 3] [i_1 - 2])) ? (arr_10 [i_0] [i_1]) : (((/* implicit */long long int) var_7))))))) % ((+(var_6)))));
                            arr_31 [i_0 + 2] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) arr_11 [17ULL] [(unsigned char)3] [i_2] [i_1] [i_0] [i_0 - 1]);
                            arr_32 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_3] [i_8] = ((/* implicit */int) arr_14 [i_3] [i_3] [(_Bool)1] [i_3] [(_Bool)1]);
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 1059142214361762885LL))));
                            var_21 = ((/* implicit */_Bool) (unsigned char)108);
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_36 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-((+(max((((/* implicit */unsigned int) arr_16 [i_0])), (arr_13 [(signed char)18] [i_0] [i_2] [i_0] [i_0] [i_0])))))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 0ULL)) ? (-9098318014755707198LL) : (((/* implicit */long long int) 4153077072U)))), ((-(arr_10 [i_2] [i_2]))))))));
                        var_23 = var_9;
                    }
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (arr_8 [i_0] [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) ((_Bool) var_6))) : (-1821790030)));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_2] [(unsigned char)13] [i_1] [i_1 - 2] [i_0])))) < (((((/* implicit */_Bool) arr_6 [(signed char)15])) ? (var_5) : (((/* implicit */unsigned long long int) var_7)))))))));
                }
            } 
        } 
    } 
}
