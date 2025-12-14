/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114208
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_18) | (var_9)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)32766)))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65530)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [(unsigned short)5] [i_0 + 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(unsigned char)2] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)5)))) | (((/* implicit */int) ((_Bool) (unsigned short)16)))));
        arr_4 [i_0] = ((/* implicit */short) (~(3948177080U)));
        var_22 = ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 3] [i_0 + 4]));
        var_23 = ((/* implicit */long long int) min((var_23), (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) (unsigned short)0);
        arr_7 [i_1] [(unsigned char)0] = ((/* implicit */signed char) 2178144300U);
        arr_8 [i_1 - 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 130944)) | ((~((+(15836437031440443060ULL)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_17 [i_4 - 1] [2LL] [(unsigned short)20] = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_25 *= ((/* implicit */int) ((2512398578U) * (((unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (-(arr_12 [i_3] [(unsigned char)8]))))))))));
                }
            } 
        } 
    } 
}
