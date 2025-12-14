/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188961
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
    var_10 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */short) var_2);
                    arr_8 [i_2] [i_2] = ((/* implicit */short) var_0);
                    var_12 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))))) ? (((/* implicit */int) ((signed char) (unsigned char)192))) : (((/* implicit */int) arr_5 [i_0] [i_1])));
                    var_13 *= ((/* implicit */signed char) ((unsigned char) arr_3 [i_2] [i_0] [i_0]));
                    var_14 -= ((/* implicit */unsigned long long int) (+(var_6)));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_15 = ((unsigned char) arr_7 [i_0] [i_1] [i_0] [i_0]);
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) 14807474395638162756ULL))));
                    var_17 = ((/* implicit */unsigned char) var_3);
                    arr_11 [i_3] [i_3] [i_3] = ((/* implicit */short) (unsigned char)192);
                }
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1145468323678100725LL)));
                    arr_16 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)93))) << (((((/* implicit */int) var_8)) - (23976)))));
                }
                var_19 = ((/* implicit */int) ((unsigned long long int) (+(((((/* implicit */int) (signed char)65)) - (((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
