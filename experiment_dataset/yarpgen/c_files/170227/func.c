/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170227
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((var_3), (((/* implicit */short) var_12))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) var_4);
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-1)))), (((((/* implicit */int) var_16)) | (((/* implicit */int) (short)15536))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)15536))))) : ((~(arr_3 [i_3 - 1] [i_0 + 1])))));
                        var_20 = ((/* implicit */unsigned char) max((((long long int) arr_3 [(_Bool)1] [5])), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 1460959413))) <= (((/* implicit */int) (short)-15537)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) arr_9 [i_0]);
        }
        var_22 = ((/* implicit */unsigned char) (((-(arr_5 [i_0 + 1]))) + (((/* implicit */long long int) (+(((/* implicit */int) min(((short)4095), (((/* implicit */short) (_Bool)1))))))))));
    }
    for (int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned short) arr_5 [i_6]))) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)15536), ((short)15536))))))), ((+((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    var_24 = max(((unsigned short)21506), (((unsigned short) var_1)));
                    var_25 = ((/* implicit */short) 15);
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(arr_0 [i_4])))) ? (((((/* implicit */_Bool) var_3)) ? (845793963326651453LL) : (arr_8 [i_4] [4] [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)4094))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_6)))))))));
                    var_27 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)26148))))), (((int) (-(((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_6 [i_4 + 2] [i_4 + 2] [i_4 + 2]), ((unsigned short)16383)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44029))) - (7098766952962590469LL))) : ((-(var_2))))) < (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)26148))))))))));
        arr_18 [i_4] |= ((/* implicit */int) ((unsigned char) min(((unsigned short)21506), (((/* implicit */unsigned short) (short)-9393)))));
    }
    var_29 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)0))))));
    var_30 = ((/* implicit */int) max((var_30), (min((((/* implicit */int) var_3)), (var_17)))));
}
