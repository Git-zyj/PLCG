/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176645
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                            {
                                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_3] [i_2 - 1])) & (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_10 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 1]), (arr_10 [i_0] [i_4] [i_2 - 3] [i_0] [i_4 - 1] [i_0] [i_0])))) : (((/* implicit */int) var_1))));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (+(2147483647)));
                                arr_15 [i_4] [i_4 - 1] [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */int) (_Bool)0)), (2147483647))), (((((/* implicit */_Bool) (short)8983)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
                            }
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) 4099164217U)) ? (18056123585330390531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_5 [i_2 - 3] [i_2] [i_2 - 2] [i_2 + 1])))) << ((((((+((-2147483647 - 1)))) - (-2147483609))) + (51))))))));
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
                            arr_16 [i_0] [i_3] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2 - 4] [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-126)))))));
                            var_13 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) > (390620488379161094ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((9764589335536066111ULL) / (10286419040429105739ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_1] [i_0] [i_0] [i_0])))))) : ((+(((((/* implicit */_Bool) var_3)) ? (1948074770438766144ULL) : (10993518894440928322ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((int) var_4)), (min((65535), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (signed char)16)))))))))));
}
