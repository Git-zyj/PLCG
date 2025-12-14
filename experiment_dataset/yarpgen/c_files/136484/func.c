/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136484
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [19LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (short)-26317));
                        arr_13 [i_0] [i_1] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) (short)-26317);
                        arr_14 [i_1] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (((~(var_1))) ^ ((-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(short)7])) ? (5) : (-10)))))));
                        arr_15 [i_2] [i_1] = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) arr_11 [(short)4])) & (-1606547539)))));
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)26291)))))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_22 [(_Bool)1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) 2236705009U)) : (-57637539843209670LL)))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) -16))));
                        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                    arr_23 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((6368459586277050591LL) & (((/* implicit */long long int) max((((/* implicit */int) (short)-11429)), (arr_2 [i_0])))))))));
                    arr_24 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) (((_Bool)1) && (((/* implicit */_Bool) 11)))))) ? (((((/* implicit */_Bool) (unsigned short)62384)) ? (((/* implicit */int) (_Bool)0)) : ((~(2095104))))) : (((/* implicit */int) (short)-23516)));
                    var_15 = ((/* implicit */short) (((+(arr_21 [i_1] [i_1] [i_1] [i_1 + 1]))) > (((/* implicit */unsigned long long int) (+((-(-1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_18 [i_0] [i_7 + 3] [i_7] [1LL] [i_6 - 1] [i_6 - 1])))), (min((((((/* implicit */int) (unsigned char)233)) << (0))), (((/* implicit */int) max(((unsigned short)65525), (((/* implicit */unsigned short) arr_26 [i_7] [i_6 + 1] [(short)15])))))))));
                    var_17 = ((/* implicit */long long int) arr_6 [i_7 - 3] [i_6 - 3] [i_6 - 2]);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)89)), ((unsigned short)65529)))) ? (var_0) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) < (((((/* implicit */_Bool) -6)) ? (2058262285U) : (0U))))))));
}
