/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167125
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_16 ^= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) ((short) var_6))))));
        arr_2 [(_Bool)1] |= ((/* implicit */_Bool) (unsigned char)31);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)0))));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((3822246333U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) << (((arr_0 [i_1 + 1]) - (2661554752870319748ULL)))))), (max((max((144115188075855872ULL), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_2] [i_1])))), (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1] [i_1] [i_1 + 1])))))));
                    arr_12 [i_1 + 2] [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 4])) >= (((/* implicit */int) var_14))))) << (((/* implicit */int) ((((/* implicit */int) (short)-19)) < (((/* implicit */int) (unsigned char)250)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65518)) + (((/* implicit */int) (unsigned char)0))));
                    arr_19 [i_1] [6] [i_5] [i_1] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) arr_9 [i_5])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_10 [i_1 - 1] [i_1 + 3] [i_5] [1ULL]) < (((/* implicit */int) (unsigned char)62)))))));
                    var_20 = ((/* implicit */unsigned int) arr_0 [i_4]);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((14607628794194204770ULL) > (((/* implicit */unsigned long long int) -8947117801863841252LL))))), (var_4))))));
    var_22 = ((/* implicit */long long int) var_8);
}
