/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186453
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_12 = ((/* implicit */unsigned char) (~(arr_0 [i_0 - 1] [i_0 - 1])));
        var_13 = ((/* implicit */signed char) ((3693914405U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (13139318924202836007ULL)))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 13139318924202835999ULL)) && (((/* implicit */_Bool) var_6))))) != (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_2 [i_0])))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_17 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (!(((/* implicit */_Bool) 3326748080U)))))));
                            arr_18 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_3))))) && ((_Bool)1)));
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) arr_9 [i_2] [i_3])) & (var_8)))));
                            var_16 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)0)) << (((var_1) - (7524305749800702456LL))))) | (((((/* implicit */int) var_0)) << (((/* implicit */int) var_7))))));
                        }
                        arr_20 [i_1] [i_1] = ((/* implicit */_Bool) (-(var_5)));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) 13139318924202835978ULL);
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (max((((short) (~(5307425149506715648ULL)))), (((/* implicit */short) var_6))))));
        arr_25 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_22 [i_5 + 4] [i_5 + 4]), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (arr_24 [i_5]))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) 5512446973563221057LL)) && (((/* implicit */_Bool) 13139318924202836007ULL)))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5])))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (max((((/* implicit */long long int) arr_24 [i_5])), (4099195753988625956LL))))))))));
                }
            } 
        } 
        var_20 += ((/* implicit */int) min((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_22 [i_5] [i_5 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (((/* implicit */int) var_6)))))) : (var_5))), (((/* implicit */unsigned long long int) max((max((var_11), (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_9)))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) arr_22 [i_5 + 4] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_5] [i_5 - 3]))))) > (5307425149506715652ULL))))));
    }
    var_22 += ((/* implicit */short) max((((max((((/* implicit */long long int) var_3)), (var_1))) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))))))), (((/* implicit */long long int) var_7))));
    var_23 = ((/* implicit */signed char) var_2);
}
