/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139959
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 11654658219529802260ULL)) ? (-2147483631) : (((/* implicit */int) var_2))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((6792085854179749354ULL) - (((/* implicit */unsigned long long int) ((long long int) 6792085854179749324ULL)))))) ? (((6792085854179749354ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))));
                                arr_16 [0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 8800471883595182998ULL);
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6792085854179749365ULL)) ? (((/* implicit */int) (unsigned short)63520)) : ((+(((/* implicit */int) ((_Bool) 910381670U)))))));
                arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17710))))) * ((~(var_8)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((var_0) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)8))))) : (((6792085854179749377ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) 1810929072362422316LL)) / (7293627688291426001ULL)))))));
}
