/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153876
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
    var_11 = (~(var_5));
    var_12 = ((/* implicit */unsigned short) ((short) ((short) var_5)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */int) ((arr_2 [i_0] [i_1]) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
                        arr_8 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) 1480644046183899929ULL);
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_0] &= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (7967595312176522101ULL))))));
                        var_14 = arr_7 [i_0] [i_2] [i_2] [i_0];
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                }
                var_15 = ((/* implicit */unsigned short) var_6);
                arr_15 [17U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_0])) % (((unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0])))) > (min((7967595312176522120ULL), (((/* implicit */unsigned long long int) (short)-29364))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            {
                var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_6 - 1])) : (((/* implicit */int) arr_16 [i_6 - 1]))))) ? (((((/* implicit */int) arr_16 [i_6 + 1])) - (((/* implicit */int) (short)29364)))) : (((/* implicit */int) arr_16 [i_6 - 1]))));
                arr_20 [14U] = ((/* implicit */unsigned int) min((((1480644046183899910ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6])) << (((-1775132953) + (1775132958)))))))), (((1480644046183899929ULL) * (1480644046183899929ULL)))));
                var_17 = ((/* implicit */unsigned char) arr_16 [i_6 - 1]);
                var_18 = ((/* implicit */signed char) min((((int) min((((/* implicit */unsigned long long int) (unsigned char)0)), (16966100027525651706ULL)))), (((/* implicit */int) ((signed char) var_6)))));
            }
        } 
    } 
}
