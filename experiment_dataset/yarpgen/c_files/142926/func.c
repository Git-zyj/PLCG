/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142926
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
                    arr_9 [(short)7] [(short)7] = ((/* implicit */unsigned int) 1859019089);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [(unsigned short)2] [i_2] [(unsigned short)2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 6632846428450143922ULL)) ? (((unsigned long long int) (unsigned char)172)) : (((/* implicit */unsigned long long int) -1859019099)))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4739934913640885953LL))))))));
                                arr_18 [i_1] [i_1] [7] [i_1] [i_4] [(unsigned short)3] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)21061), (((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)185)))))))) == (((/* implicit */int) (signed char)55))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2826158590U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) | (1859019094))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)21064))))) < (1073479680LL)))) : (((/* implicit */int) (unsigned short)42540)))))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)86))))) ^ (((int) (_Bool)1)))) <= ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)21061)))))))));
        arr_21 [3ULL] = ((/* implicit */signed char) (short)9);
    }
    var_13 = ((/* implicit */unsigned int) 4194303ULL);
    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112))))) ? (((((/* implicit */_Bool) (unsigned short)40968)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) ((_Bool) 281474976710655LL)))))) ? (min((((/* implicit */int) (unsigned short)18320)), ((~(((/* implicit */int) (unsigned short)28544)))))) : ((+(((/* implicit */int) (short)1728))))));
}
