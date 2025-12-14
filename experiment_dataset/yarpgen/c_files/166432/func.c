/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166432
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) -1561162474))));
                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) 17))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (((-(869298018U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) / (((/* implicit */int) (short)-12))))) && (((/* implicit */_Bool) var_7)))))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */signed char) (+((+(((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) (_Bool)1))))))));
                                var_15 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198))))) > ((((!(((/* implicit */_Bool) (unsigned char)161)))) ? (((/* implicit */int) (unsigned char)185)) : ((~(((/* implicit */int) (short)27227))))))));
                            }
                            var_16 += ((/* implicit */int) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) >= (((((/* implicit */_Bool) (unsigned char)124)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7464)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23249)) < (((/* implicit */int) (unsigned char)121))))), (var_8));
}
