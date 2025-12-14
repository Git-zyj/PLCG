/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123514
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_10 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) << (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)104)) * (((/* implicit */int) (unsigned short)31126))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) * (8392769059781341385ULL)))))));
                            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27))) + (6154870598180251513ULL))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] &= ((/* implicit */_Bool) ((((((8589934591ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24665))))) >> (((757469392) - (757469357))))) % (((/* implicit */unsigned long long int) 138964537))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-1))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) 1593502234129957338LL);
}
