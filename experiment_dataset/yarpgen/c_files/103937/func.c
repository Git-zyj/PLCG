/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103937
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) var_1))))) ^ (((((unsigned long long int) var_4)) ^ (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */int) (unsigned short)35387))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) ^ (arr_3 [(signed char)20])))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12114))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) var_14)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) ((signed char) (short)7432)))))))));
                        var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_2 [(unsigned char)21] [i_2] [i_0]))))));
                        var_22 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)255)), (7271772158208163515LL)));
                    }
                    arr_9 [(unsigned char)5] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((arr_5 [i_2] [i_0] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_0] [i_2])))))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (unsigned char)5)), (var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            {
                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073441116160ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (1181064999U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4])))));
                var_25 = ((/* implicit */signed char) ((short) min((arr_1 [i_5 - 1] [i_5 - 1]), (arr_1 [i_5 + 1] [i_5 - 1]))));
            }
        } 
    } 
}
