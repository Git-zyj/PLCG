/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174048
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
    var_20 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
    var_21 = ((/* implicit */short) ((var_6) ? (min(((((_Bool)1) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (short)20445)))), ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((short) var_0)))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((2520506528034669524ULL) / (13594353791384927948ULL))))));
            arr_5 [i_0] = ((/* implicit */short) ((signed char) var_6));
        }
        for (signed char i_2 = 2; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25346))) == (1150030956U));
                        var_25 = ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
                        arr_16 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */signed char) (-((-(2303591209400008704ULL)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) ((_Bool) var_2));
        }
        for (signed char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
            {
                var_27 = (signed char)-124;
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_6] [i_6] [i_6] [i_6 - 1]);
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((-(((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_29 = ((/* implicit */signed char) var_4);
                arr_26 [i_0] [i_5 - 2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_14 [i_5 + 2] [i_5 + 1] [i_7] [i_7])) : (((/* implicit */int) arr_19 [i_0]))));
            }
            var_30 = ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) ((unsigned short) var_18))) : (((((((/* implicit */int) (short)-9045)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
            arr_27 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (_Bool)1);
        }
        arr_28 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
        var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_32 = ((/* implicit */short) var_9);
}
