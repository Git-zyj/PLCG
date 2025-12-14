/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166722
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 4026531840U))) * (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 -= ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min(((unsigned short)31456), (((/* implicit */unsigned short) (unsigned char)40))))))) % (1425393058));
                    var_21 &= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (arr_2 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (((/* implicit */_Bool) arr_2 [i_2 - 2])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) (((~(1314250736))) / (((/* implicit */int) arr_5 [i_0] [i_0 + 3] [i_0]))));
                        arr_11 [i_1 + 1] [i_2 - 1] [i_1 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_3]))));
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 + 3] [i_1] [i_2 + 2] [i_2 - 2]))));
                        var_23 = ((/* implicit */signed char) arr_0 [i_0]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_24 += ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_2 [i_2 + 1])), (((((/* implicit */long long int) 27)) % (1687737639818581583LL))))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))));
                        var_25 &= ((((/* implicit */long long int) arr_0 [i_2])) % (((min((((/* implicit */long long int) arr_5 [i_0] [i_2 + 1] [i_0])), (1687737639818581590LL))) % (((/* implicit */long long int) ((arr_2 [i_4]) * (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) 7274893602285445254LL);
                    }
                    var_26 = ((/* implicit */signed char) 14358379115592423017ULL);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) -1687737639818581587LL))))))) % (((/* implicit */int) (short)1807))));
    var_28 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */long long int) (unsigned char)206)), (-8630336999544315974LL)))))));
}
