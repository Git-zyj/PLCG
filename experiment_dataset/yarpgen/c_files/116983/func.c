/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116983
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [(unsigned short)10] &= min((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) < (13U)));
        var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (((unsigned int) arr_1 [15])))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) >= (((/* implicit */int) min(((short)-11285), (((/* implicit */short) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(arr_8 [i_2])));
        arr_10 [i_2] = ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (((/* implicit */int) (_Bool)1)));
    }
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 68715282432LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_12 [i_3 + 1] [(signed char)14]) != (arr_12 [i_3 - 3] [i_3 - 3]))))));
        var_17 &= ((/* implicit */unsigned int) arr_12 [i_3] [i_3]);
        var_18 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_2))));
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (min((((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_17 [i_4])))) : (arr_1 [i_4]))), (arr_14 [i_4])))));
        arr_18 [i_4] = ((/* implicit */unsigned char) max(((_Bool)1), (arr_17 [i_4])));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((signed char)62), (((/* implicit */signed char) (_Bool)1))))))))));
        var_22 = ((/* implicit */unsigned int) max((((long long int) var_3)), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_4])))))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (signed char i_8 = 2; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_30 [i_5] [i_5] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_26 [i_8 - 1] [i_7] [i_6] [i_5]), (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) max((arr_24 [i_5] [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) arr_20 [i_7]))))) ? (((/* implicit */unsigned long long int) ((var_1) >> (((arr_24 [i_5] [i_5] [16U] [i_8]) - (1444358552342442953ULL)))))) : ((~(17169051115669810402ULL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_23 += ((/* implicit */_Bool) ((unsigned short) arr_31 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 + 1]));
                            arr_33 [i_5] [i_5] [24] [i_7] [i_8 + 3] [(unsigned short)8] = ((/* implicit */long long int) ((signed char) (_Bool)1));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_31 [i_5] [i_6] [i_7] [i_8] [i_10]))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((min((arr_34 [i_8 + 1] [i_8] [i_8] [i_8 - 2] [i_8 + 2] [i_8 + 2]), (arr_34 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1]))), (((arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1]) >> (((/* implicit */int) var_0)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_37 [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_1) : (((/* implicit */unsigned int) var_7))))) && (((/* implicit */_Bool) arr_36 [i_5]))))), (((unsigned long long int) arr_31 [(unsigned char)18] [24U] [i_5] [i_5] [i_5]))));
    }
    var_26 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) max(((signed char)25), (var_12))))))));
    var_27 = ((/* implicit */unsigned long long int) var_7);
}
