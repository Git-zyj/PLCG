/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161431
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_14 += (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
            var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            arr_4 [i_0] [i_0] [i_1] = (~((~(((/* implicit */int) (short)-1539)))));
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)74))))));
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2])))))));
        }
        var_18 -= ((/* implicit */long long int) (+((-(712254395068261190ULL)))));
    }
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (max((max((((/* implicit */unsigned long long int) var_3)), (712254395068261190ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)164)))))))));
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) (~((-((~(((/* implicit */int) var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_22 [i_3] = ((/* implicit */signed char) (-((+((~(((/* implicit */int) (unsigned char)91))))))));
                                arr_23 [i_3] [i_3] [17U] [i_7] = ((/* implicit */unsigned short) max((min(((~(arr_0 [i_4]))), (min((arr_0 [i_5]), (((/* implicit */unsigned int) (short)-1336)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)43113)))))));
                                arr_24 [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-((-(max((arr_12 [i_3 - 1] [i_4]), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3]))))))));
                                arr_25 [i_3] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-777))))))), ((~((~(var_12)))))));
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)59414))))))), ((~(max((1586907332), (((/* implicit */int) (unsigned short)22422))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5] [i_8] [i_3] [i_8] [i_9] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) arr_13 [i_8] [4ULL])), (var_5))))), (((/* implicit */unsigned long long int) max(((-(1740301857))), ((-(((/* implicit */int) var_11)))))))));
                                var_22 = ((/* implicit */unsigned short) max(((~(min((3522925901617373856LL), (-2118836827484328575LL))))), (((/* implicit */long long int) 3593399772U))));
                                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((-(arr_17 [i_9] [i_8] [i_5 + 1] [i_3])))))), (max((min((((/* implicit */long long int) 3738096672U)), (arr_11 [i_3] [i_8] [i_9 + 4]))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)28136)), (-1740301848))))))));
                                arr_31 [i_3 - 2] [i_5] [i_3] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) var_8)), (2140297477850611696ULL))), (((/* implicit */unsigned long long int) (~(var_12)))))), (((/* implicit */unsigned long long int) (~(-4469952443607454048LL))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62622))))), ((+(((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) min((max(((+(((/* implicit */int) (unsigned short)22416)))), (min((((/* implicit */int) (short)1345)), (-1740301847))))), ((-(((/* implicit */int) max(((unsigned short)62622), ((unsigned short)2907))))))));
    var_26 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)30246))));
}
