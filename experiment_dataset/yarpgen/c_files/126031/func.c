/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126031
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
    var_19 = ((/* implicit */unsigned char) min(((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) min((var_18), ((unsigned char)255)))))), ((-(((((/* implicit */_Bool) (unsigned short)4608)) ? (((/* implicit */int) (unsigned short)60928)) : (((/* implicit */int) var_12))))))));
    var_20 = ((/* implicit */unsigned short) ((unsigned char) var_0));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) (unsigned short)11144);
            arr_4 [i_0] = ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_3 [(unsigned short)9] [(short)0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967280U)))))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_2] = max((arr_6 [i_0] [i_2]), (((/* implicit */unsigned short) (unsigned char)1)));
            arr_10 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((16U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34040)))))) & (((((/* implicit */long long int) ((/* implicit */int) var_18))) - (-110801036098575968LL))))) / (var_8)));
            arr_11 [i_2] [(unsigned char)4] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-1))));
            arr_12 [9ULL] = ((/* implicit */unsigned short) (~(((4181710397U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32767)) == (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) != (((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)55039)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60914))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-17402)) && (((/* implicit */_Bool) (signed char)25))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)40)))))));
        arr_13 [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) max(((unsigned short)4623), (((/* implicit */unsigned short) (short)17390))))))), (min((((/* implicit */int) ((unsigned char) var_14))), (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)170))))))));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17382)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
    }
    var_24 *= var_10;
}
