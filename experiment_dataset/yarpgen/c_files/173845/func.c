/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173845
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
    var_17 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) (+((~(((((/* implicit */int) var_11)) % (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                    arr_8 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)51339)), (var_2)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_1] [i_1] [i_1] [i_0] [i_1 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)24178)) : (((/* implicit */int) (short)-11379)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) (unsigned char)158))));
                                arr_17 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3738442171U)))))) != (2344877413U))) ? (((((/* implicit */_Bool) ((arr_5 [i_0] [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? (max((arr_0 [i_0] [i_1 - 1]), (arr_15 [(short)10] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))) : ((+(6496106500237108455ULL)))));
                                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 2] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) (((((_Bool)1) ? (12545741050419221617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))) >= (((/* implicit */unsigned long long int) min((4286228314U), (((/* implicit */unsigned int) var_12))))))))));
                                arr_19 [i_3] [i_1 - 3] [i_0] [i_1 - 3] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_1])) ? (8652331544771988004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))) : (max((arr_11 [i_4] [(signed char)8] [i_2] [(unsigned char)11]), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 268434944U)) && (((((/* implicit */int) var_11)) > (-70063776))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
