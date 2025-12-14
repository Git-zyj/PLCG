/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106293
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)15)) : (-488080061))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    var_21 = ((/* implicit */unsigned char) (~((~((~(-488080061)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)44))))));
                            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 4294963200U)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned char) ((unsigned char) -177915752))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_24 -= ((/* implicit */signed char) (-(((-8491661787372813689LL) + (9223372036854775807LL)))));
                    var_25 = 18446744073709551595ULL;
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (+(3221225472ULL)));
}
