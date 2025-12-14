/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126873
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
    var_10 = ((/* implicit */long long int) (+(((((/* implicit */int) ((signed char) -6615576050017783787LL))) / (min((-1080285125), (((/* implicit */int) var_5))))))));
    var_11 = ((/* implicit */long long int) var_2);
    var_12 = ((/* implicit */unsigned char) (+(-3491707289578177624LL)));
    var_13 = (-(((/* implicit */int) ((unsigned char) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -190046708890572715LL)), (var_7)))) || (((((/* implicit */int) var_5)) != (((/* implicit */int) (short)31962)))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (6615576050017783793LL))) + (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)1] [i_2])) + (((/* implicit */int) (signed char)-85))))))) | (((/* implicit */long long int) (-(((/* implicit */int) ((523683109) >= (((/* implicit */int) arr_5 [i_0] [i_1])))))))));
                            var_15 = ((/* implicit */unsigned long long int) ((signed char) ((_Bool) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) 18377122499858921843ULL);
            }
        } 
    } 
}
