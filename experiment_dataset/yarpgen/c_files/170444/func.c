/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170444
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_11);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)5039))))) : (max((4027489055975706894LL), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) (signed char)75)))), (((((/* implicit */_Bool) min(((short)-25780), (((/* implicit */short) (signed char)-75))))) ? (11847231358828126987ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_6))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (2491862989U)));
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), ((unsigned short)25533))))) - (max((((/* implicit */long long int) (short)-32356)), (var_8)))))));
                                arr_15 [i_0] [i_1] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)0);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)10))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) min(((signed char)74), ((signed char)17))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7]))) & (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_21 [i_7])), (2491862995U))))))));
                    arr_27 [i_7] [i_6 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_5])) != (((/* implicit */int) (short)-27178))))) + ((~(((/* implicit */int) (signed char)-88))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)-39)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5])))))))) : (((/* implicit */int) arr_22 [i_5]))));
                    var_19 = ((/* implicit */unsigned int) ((((long long int) ((201698088U) == (arr_17 [i_5] [i_6])))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((-1418394394) == (((/* implicit */int) arr_20 [i_7]))))), ((unsigned short)65514)))))));
                }
            } 
        } 
    } 
}
