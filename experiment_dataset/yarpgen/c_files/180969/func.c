/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180969
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
    var_15 = ((/* implicit */unsigned short) -1091940827);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) -1091940822))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_2 [i_0] [i_1 + 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-11553))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+(var_12)))));
                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (signed char)-1)))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_3))));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1091940812)) ? (var_11) : (((((/* implicit */_Bool) (-(-1091940822)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((-462954691) < (((/* implicit */int) (short)11556)))))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? ((+(-1091940826))) : (((/* implicit */int) (short)-11553))))) ? (((((/* implicit */_Bool) -1091940828)) ? (430856587U) : (4019272071U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                arr_10 [i_0] [i_1] [i_0] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > ((+(((/* implicit */int) (_Bool)0))))));
            }
            var_21 += ((/* implicit */unsigned char) ((unsigned int) var_6));
            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-32761))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32761)) * (((/* implicit */int) arr_0 [i_0] [(unsigned char)10])))))));
            arr_11 [i_1] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]);
        }
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)25295))) ? (min((((/* implicit */int) (short)12)), ((-(((/* implicit */int) var_4)))))) : ((+(-2081255298)))));
            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-11553))))) >> (((max((-1091940822), (((/* implicit */int) (unsigned short)65535)))) - (65530)))));
        }
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(var_11)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)69)), ((short)-32766))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) 8191ULL))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_9))));
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)78))))))))));
    var_31 ^= ((/* implicit */long long int) var_3);
}
