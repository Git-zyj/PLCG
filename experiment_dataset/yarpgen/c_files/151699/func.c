/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151699
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15360)) | (0)))) ? (var_9) : (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) (unsigned char)118))))))) & ((~(((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15360)) ? (6458877999247297121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15360)))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                            {
                                var_10 = ((/* implicit */int) ((short) (((-(var_1))) > (((((/* implicit */_Bool) -8)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                                arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((var_2), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1])))))) ? (((/* implicit */int) ((arr_5 [i_4 + 1] [i_4 + 2] [i_4 + 3]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1326317018403109471LL))))))))) : ((+((+(0)))))));
                                arr_19 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((-1584559378223735680LL) < (((/* implicit */long long int) (~(((/* implicit */int) ((arr_1 [i_2] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                            {
                                arr_22 [i_0] = ((/* implicit */signed char) (-((-((+(((/* implicit */int) arr_10 [i_0] [5ULL]))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                            }
                            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_6])))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_6])) && (((/* implicit */_Bool) -2826359140733881458LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14938655461909246936ULL)) ? (var_6) : (((/* implicit */long long int) var_9))))) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) var_4))))))))));
                                var_12 = ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)56502))))) / (((unsigned int) var_6)));
                            }
                            arr_27 [i_0] [i_0] [i_0] [i_0] = var_6;
                            var_13 = var_1;
                            arr_28 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [7LL] [i_0] [i_0] [i_0]))))) - (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) & (-318352422))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)224)) != (((/* implicit */int) (unsigned char)128))));
    var_15 = ((/* implicit */_Bool) var_4);
}
