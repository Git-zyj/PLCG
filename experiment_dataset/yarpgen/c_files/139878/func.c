/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139878
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) -785785816);
                            var_14 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) min((var_2), (var_2))))));
                            var_15 = ((/* implicit */long long int) ((short) (((~(((/* implicit */int) var_12)))) - (((((/* implicit */int) (signed char)-83)) | (var_0))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) + ((~(((/* implicit */int) (unsigned char)0))))));
                                var_17 = min((var_10), (((/* implicit */unsigned long long int) ((short) (~(var_3))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-16)), (var_9)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)244))))) < (min(((+(12253645200469637872ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((var_10) - (1954431818293032588ULL))))))))));
}
