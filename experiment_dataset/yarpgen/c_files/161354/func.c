/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161354
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
    var_14 = ((/* implicit */short) var_2);
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4639222842414082423LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4))) : (2961017685578647504LL)))) ? (var_3) : (var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((3641899947310148943LL) << (((6517201449322210947ULL) - (6517201449322210946ULL)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6517201449322210947ULL)))))));
                arr_8 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))), ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_5 [i_1 + 1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) var_3);
                            var_17 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((long long int) (signed char)-76)), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2961017685578647518LL)), (11929542624387340694ULL))))))) : (((/* implicit */int) arr_11 [i_1 + 1] [19] [i_2] [19] [i_3]))));
                        }
                    } 
                } 
                arr_14 [(unsigned short)7] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)91)), ((short)-29007))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(var_7)));
}
