/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102230
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(var_8))))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) 2057600692U)), (2019628396777127287LL)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
        arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 6431658680472009111LL)), (min((1612569933315947170ULL), (((/* implicit */unsigned long long int) (signed char)16))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_15))), (var_0)))) ? (-6571254660495346957LL) : (-6571254660495346951LL)));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) | (((/* implicit */int) var_7))))))))) <= ((+(((long long int) 6571254660495346932LL))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_0]);
                        arr_17 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] |= ((/* implicit */unsigned char) (~(3989706551083585252ULL)));
                        var_20 = ((/* implicit */long long int) var_6);
                        var_21 += ((/* implicit */long long int) ((unsigned int) max((((var_13) >> (((var_14) - (1985670923U))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2]))) >= (6571254660495346956LL)))))));
                    }
                    arr_18 [10ULL] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]))))));
                }
            } 
        } 
    }
}
