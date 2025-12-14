/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151741
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_7)))))));
                arr_4 [i_0] = ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (signed char)127);
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)0)), (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)1)) : (-1949919543)))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(arr_8 [i_2])))), (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_11 [(unsigned char)14] [i_3] [i_2]))))), ((-(arr_5 [i_2] [i_3])))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned char)55)) ? (-1949919552) : (-205017326))) : (min((arr_8 [i_2]), (arr_8 [i_2])))));
                }
                var_20 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_21 = ((/* implicit */int) arr_6 [i_2] [i_2 + 1]);
                    var_22 = ((/* implicit */unsigned short) (signed char)127);
                    var_23 = ((/* implicit */signed char) -1949919534);
                }
            }
        } 
    } 
}
