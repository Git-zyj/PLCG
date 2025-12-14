/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178023
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((long long int) var_8))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))) << (((var_10) - (15731009041223975778ULL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 2] [i_0] [(short)14] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_1))))))));
                    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (max((var_2), (((/* implicit */unsigned int) (_Bool)1))))))), (((((unsigned long long int) var_10)) / (((((/* implicit */_Bool) 1638126562334661160LL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 ^= ((/* implicit */int) max((((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_7)), ((unsigned short)34390))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-2)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35711))) / (2666811431U)))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_13 [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) * (((long long int) var_13)))))));
            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-6529)))))) - (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (-9128543546036306701LL) : (((/* implicit */long long int) var_5)))));
                            arr_24 [i_3] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_0))))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1912682832)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))) + (max((((/* implicit */unsigned long long int) var_5)), (var_10)))))));
                        }
                        var_20 |= ((/* implicit */unsigned long long int) ((int) ((unsigned int) ((_Bool) var_11))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) (-(min((((unsigned int) var_9)), (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    var_22 |= ((/* implicit */unsigned long long int) ((long long int) var_10));
}
