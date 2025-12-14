/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163424
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    var_12 &= var_0;
                    var_13 = ((/* implicit */int) var_7);
                }
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_14 = arr_8 [9] [i_4] [i_4] [i_4] [i_0] [i_4];
                        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) -7965525253045989135LL)) ? (((/* implicit */int) ((max((16777215), (((/* implicit */int) var_5)))) == (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [8]))))) : ((+((-(((/* implicit */int) arr_7 [i_1] [i_4]))))))));
                        var_16 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned short)51339)) ? (((/* implicit */long long int) 16777190)) : (arr_8 [i_0] [9LL] [i_1] [13] [i_0] [i_4])))))));
                        var_17 = ((((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 2] [8] [8])) ? (var_3) : (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_3] [i_3 - 2] [i_4] [17LL]), (arr_6 [i_1] [i_3 - 2] [i_1] [i_3]))))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-16777186), (805306368))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_19 -= ((/* implicit */long long int) ((signed char) (~((~(-16777223))))));
                        var_20 -= ((/* implicit */unsigned short) ((arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_1] [i_3 - 2]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 3] [i_3 - 2] [i_3 - 2] [i_5] [i_3 - 3])) ? (16777215) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 2] [i_3 + 1])))))));
                    }
                    for (long long int i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) min((max((((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)27992)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36300))) : (-598424827004655036LL))))), (((((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)104))))))))));
                        var_22 = (+((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_8 [i_0] [i_1] [i_0] [i_6 - 2] [i_0] [i_0]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_3] [i_1] [i_1])) / (((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-598424827004655013LL), (((/* implicit */long long int) 1073741312))))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_7])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_3 - 1] [i_7]))));
                        var_25 = ((/* implicit */unsigned short) var_4);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((unsigned short) var_5));
                            var_27 = ((/* implicit */short) arr_3 [i_0]);
                        }
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [9LL] [i_1] [9LL] [i_7] [i_0] [i_7])) ? (((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))) << (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_6 [i_0] [i_0] [i_3 - 2] [i_7])))))) : (var_3)));
                    }
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) var_2)))))))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((int) -781077622))) > (598424827004655015LL)))) >= (var_4)));
                }
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (var_0) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0]))))) : (var_8)));
                var_32 = ((/* implicit */long long int) max((6635535733342290817ULL), (((/* implicit */unsigned long long int) (unsigned short)65166))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 72057594037927935LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (var_3))))))) : (var_0)));
}
