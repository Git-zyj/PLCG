/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112399
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
    var_12 = ((/* implicit */unsigned int) ((int) (signed char)-2));
    var_13 = (signed char)1;
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) max(((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != (arr_3 [i_0])))))), (((((/* implicit */_Bool) 7864320)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (signed char)2)) ? (1915404536) : (((/* implicit */int) (unsigned char)24))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        var_15 = max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)195)));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((520093696), (((/* implicit */int) (unsigned char)87)))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6203251779834038783LL))))), (arr_3 [i_0])));
                        arr_12 [i_0] [i_0] [0LL] = ((/* implicit */_Bool) ((int) max((((/* implicit */int) arr_6 [i_4])), (((int) 9223372036854775807LL)))));
                        arr_13 [i_0] [i_1] [i_0] [i_4 - 4] = ((/* implicit */_Bool) ((signed char) arr_10 [15LL]));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) 527765581332480LL);
}
