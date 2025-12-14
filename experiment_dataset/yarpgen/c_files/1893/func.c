/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1893
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
    var_17 = ((/* implicit */short) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_15)))))));
                    var_19 = ((/* implicit */_Bool) ((int) ((short) arr_6 [i_0] [i_1] [i_1] [i_1])));
                    var_20 = ((/* implicit */int) var_15);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0 + 1] [i_3] [i_2] [i_3 - 1] [i_0 + 1] = ((/* implicit */long long int) (+(-847110793)));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_16);
                    }
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(signed char)7]))) > (((long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])))))));
        arr_13 [(_Bool)0] = ((/* implicit */long long int) ((signed char) (+(min((((/* implicit */unsigned int) (signed char)0)), (746281905U))))));
        var_22 += ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0 + 4])) % (max((((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */int) (unsigned char)28)), (var_0))))) ? (((/* implicit */int) arr_17 [11U] [i_4])) : (((int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_8)))))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) (((+((+(((/* implicit */int) (unsigned short)18038)))))) * (((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_4])) == (((((/* implicit */_Bool) arr_14 [(unsigned char)15])) ? (((/* implicit */int) arr_14 [i_4 - 2])) : (((/* implicit */int) arr_14 [i_4])))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_14 [i_4]);
        arr_21 [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4 + 1])) ? (((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_16 [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_4])) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((arr_14 [i_4]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) min((arr_16 [i_4] [i_4]), (arr_17 [i_4] [i_4 - 2]))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) var_11);
        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) -3615144788007130881LL)))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned char) arr_16 [i_5] [i_5])))));
    }
}
