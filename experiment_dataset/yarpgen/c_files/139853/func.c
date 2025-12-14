/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139853
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -1888103980509067149LL)) ? (((/* implicit */int) (signed char)16)) : ((-2147483647 - 1))));
                            var_14 = ((/* implicit */unsigned short) var_0);
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) -1888103980509067154LL)) ? (arr_1 [i_2] [i_3]) : (var_3))), (((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_0 + 2]))))))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_8 [i_0] [i_1] [i_0] [(unsigned short)1]), (((/* implicit */int) (short)32760)))), (((((/* implicit */_Bool) -1888103980509067177LL)) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) arr_12 [8] [8LL] [i_1] [i_1 + 2]))))))) ? (((arr_5 [i_0] [0] [i_0 + 1]) / (arr_5 [i_1 - 2] [i_1 + 1] [i_1 - 2]))) : (((arr_1 [i_1] [i_1 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */short) (~(min((var_3), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 1293547770U)) ? (((/* implicit */int) (unsigned short)35446)) : (((/* implicit */int) max((((/* implicit */short) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((short) var_3))))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (60102065)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1888103980509067148LL)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((max((var_0), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((int) arr_20 [i_4])))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5352)) >> (((((/* implicit */int) (unsigned short)8333)) - (8330)))))) ? (((((/* implicit */_Bool) -1888103980509067152LL)) ? (770650121) : (((/* implicit */int) (unsigned short)5346)))) : ((~(((/* implicit */int) (unsigned short)62719))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 15; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_23 -= ((((/* implicit */int) (signed char)-23)) | (-784473811));
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) var_1));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_14 [i_4]) : (((/* implicit */int) var_10)))));
                var_26 -= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_4]))))), (((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_23 [i_4]) : (arr_23 [i_4]))));
            }
        } 
    } 
}
