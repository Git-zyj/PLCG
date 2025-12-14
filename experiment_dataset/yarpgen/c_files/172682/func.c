/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172682
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-8544)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_6)))))));
                        var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((1073741824U) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        var_14 -= ((/* implicit */short) ((unsigned short) var_9));
                        var_15 += min((234136076577189876LL), (((/* implicit */long long int) ((((/* implicit */int) var_9)) != (((var_2) - (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_16 &= ((/* implicit */_Bool) ((int) min((var_2), (((/* implicit */int) var_8)))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned short) var_4)), (var_6)))))));
                        var_18 |= ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 17; i_7 += 3) 
                        {
                            var_19 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32756)))))) < (var_3)));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((var_2) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)45932)) >= (((/* implicit */int) var_1))))))))));
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) (short)8546))) : (((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */short) ((((/* implicit */long long int) (+(var_0)))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-8563)), (var_6)))) ? (7LL) : (((/* implicit */long long int) var_2))))));
        var_23 *= var_8;
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((int) var_4)))));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        arr_27 [i_8 + 2] |= max((((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((var_0) * (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 234136076577189883LL)))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)8538)), ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-8536))))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (signed char)127))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) & (((unsigned long long int) (short)8522)))))))));
                    arr_33 [i_10] [(signed char)11] [i_8 + 2] [i_8 + 2] |= ((min((((/* implicit */int) ((unsigned char) var_7))), (var_2))) == (((int) var_6)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3221225463U)) ? (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_6))))) : (((unsigned int) var_2))))) : ((-(var_3))))))));
    }
}
