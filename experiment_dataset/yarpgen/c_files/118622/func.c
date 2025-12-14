/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118622
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_9 [(_Bool)1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) min((var_2), (var_5)))))), (((((/* implicit */int) ((((/* implicit */long long int) var_0)) > (-2699215360689660493LL)))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)22)) && (((/* implicit */_Bool) (signed char)33))))))))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_4] [(unsigned char)2] [(unsigned char)2] [i_0]), (var_15)))) ? ((~(((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_2 [(signed char)8])))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) + (((var_13) << (((arr_1 [i_1]) + (863876678)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (2280213483U)))))) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (signed char)-51))))) <= (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (signed char)51)))))))));
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1619415454)), (722750786U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (signed char)-51))))))))) - ((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_15)))))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (var_13))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)11400), (((/* implicit */short) var_12)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [4] [i_1])) < (((/* implicit */int) var_5))))) & ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                arr_18 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_3 [(unsigned short)5] [(unsigned short)2]) / (((/* implicit */int) (unsigned char)7))))) ? ((+(((/* implicit */int) var_1)))) : (((-939650532) / (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1619415449)) ? (((/* implicit */int) (unsigned short)52159)) : (732182572))) * (((((/* implicit */_Bool) 976900405)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)169))))))) ? (((((/* implicit */_Bool) (-(3716948107U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6)))))) : ((+(var_13))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2726479887U)) || (((/* implicit */_Bool) var_6))))), ((~(var_13)))))));
    var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_1))))) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
}
