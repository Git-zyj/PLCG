/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171279
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
    var_11 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)2))))) ? (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) (!((_Bool)0))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((signed char)-2), (arr_5 [i_0] [i_1] [(unsigned short)0]))))))) ? (min(((~(((/* implicit */int) (signed char)30)))), ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (unsigned short)31637)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (_Bool)1))))));
                    var_13 = ((/* implicit */unsigned int) (+(max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_8))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */short) max((var_14), ((short)-4022)));
                    var_15 = ((/* implicit */signed char) (unsigned short)27753);
                }
                var_16 *= ((/* implicit */signed char) ((((var_10) || (var_3))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_5 [(_Bool)1] [(short)17] [i_1])))), (arr_7 [i_0] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1])), (arr_10 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_10))), ((+(min((((/* implicit */unsigned int) (unsigned short)11)), (arr_12 [i_1] [i_1] [i_5])))))));
                            var_17 = ((unsigned short) (~(((/* implicit */int) (short)1016))));
                            var_18 = ((((((/* implicit */int) max(((unsigned short)14517), (((/* implicit */unsigned short) (_Bool)0))))) <= (((/* implicit */int) var_7)))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-15235)))) ? (((/* implicit */int) ((((/* implicit */int) (short)4021)) <= (((/* implicit */int) var_1))))) : (((((/* implicit */int) (signed char)-61)) % (((/* implicit */int) (signed char)-20))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 18; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_19 |= ((/* implicit */_Bool) arr_18 [i_7 + 1] [i_6] [i_1] [i_0]);
                            arr_22 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_4)), (var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                            var_20 = (!(((_Bool) (+(((/* implicit */int) (unsigned short)62708))))));
                            var_21 = ((/* implicit */_Bool) arr_17 [i_6] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_25 [i_9 - 1] [i_8 - 1])) + (((/* implicit */int) (_Bool)0)))), ((((-(((/* implicit */int) (signed char)-30)))) / (((/* implicit */int) (unsigned short)14502))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((((/* implicit */int) (short)8)) << (((/* implicit */int) var_4)))), (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) arr_24 [i_10])))))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) : (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                        }
                    } 
                } 
                var_25 -= ((/* implicit */unsigned int) (signed char)-1);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_24 [(unsigned short)14]))));
                var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_23 [(short)20] [(short)20])), ((signed char)60)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_6))))))) : ((((_Bool)1) ? (((((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_8])) - (((/* implicit */int) (signed char)1)))) : ((~(((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1]))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_8)))))))), (((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_1)))))))))));
}
