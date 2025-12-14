/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121904
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (unsigned char)17))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) 3791591110U);
                    var_14 = ((/* implicit */long long int) (signed char)-58);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        arr_11 [i_3] = ((unsigned int) (short)-1);
        var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) > (((/* implicit */int) (signed char)55))))) * (((/* implicit */int) (signed char)-1))))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-72))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
        arr_15 [5] = ((/* implicit */unsigned long long int) var_3);
        arr_16 [i_4] = ((((/* implicit */_Bool) max((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4])))) ? (((/* implicit */int) max((((/* implicit */short) arr_4 [i_4] [i_4] [i_4])), (var_2)))) : ((+(((/* implicit */int) arr_4 [i_4] [i_4] [(short)6])))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_5])) ? (4522285837817008843ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [i_5])))))));
        var_19 ^= ((/* implicit */unsigned char) arr_18 [i_5]);
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (signed char i_8 = 4; i_8 < 19; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_17 [i_7]) : (arr_17 [i_8 - 1]))) % (arr_17 [i_5])));
                            var_20 = ((/* implicit */long long int) max((4522285837817008854ULL), (((/* implicit */unsigned long long int) (+(min((8177214903831800121LL), (((/* implicit */long long int) arr_27 [i_8])))))))));
                            var_21 *= ((/* implicit */_Bool) ((1870633995U) & (((/* implicit */unsigned int) 273110094))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -633904616687235621LL)) ? (-149902898) : (((/* implicit */int) (signed char)-79))));
                            arr_32 [i_7] [i_6] [i_7] [13] [i_10] [i_10] = ((/* implicit */unsigned int) min(((-((+(((/* implicit */int) arr_23 [i_10] [i_10] [i_10])))))), (((/* implicit */int) max((arr_27 [i_6 - 2]), (arr_27 [i_6 - 2]))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            arr_37 [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) arr_36 [i_5] [i_5] [i_5] [i_8 + 1] [i_11 + 1] [i_8 - 2] [i_6 + 2]))))), (((((/* implicit */_Bool) arr_20 [i_11 - 1] [i_8 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_11 + 1]))) : (13757126907872335511ULL)))));
                            arr_38 [i_5] [5LL] [5LL] [5LL] [i_11 + 1] = ((/* implicit */int) ((((unsigned long long int) max((((/* implicit */int) (unsigned short)65535)), (-1550907994)))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_5] [i_7] [i_11 - 1])))))));
                            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((796330320U), (4294967277U)))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) 796330324U)), (13757126907872335496ULL))))) : (((int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) + (var_11))))));
                            arr_39 [(short)9] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)244))));
                        }
                        var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_26 [i_6] [i_6 + 2] [i_7] [14ULL] [i_6] [i_7]), (((/* implicit */unsigned long long int) arr_27 [(_Bool)1]))))) || (((/* implicit */_Bool) min((4522285837817008854ULL), (((/* implicit */unsigned long long int) var_9))))))))) : ((+(13924458235892542776ULL)))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((int) (signed char)-50));
}
