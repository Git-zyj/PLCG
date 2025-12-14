/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104815
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
    var_11 = var_4;
    var_12 *= min((min((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_10))))), ((~(((/* implicit */int) var_10)))))), ((-(((((/* implicit */int) var_1)) * (((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) var_6);
        var_14 = ((/* implicit */unsigned int) 4ULL);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) var_2);
                        var_15 &= ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (short)-11057)), (1646476495357776298LL)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_7 [i_3 - 2] [i_2 - 2] [i_1])))))) ? (min((((/* implicit */int) min((var_1), (((/* implicit */short) var_10))))), (((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_17 = ((/* implicit */signed char) var_4);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_20 [i_6 + 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (var_8))) - (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_4)))))) == (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
                        {
                            var_18 ^= ((/* implicit */short) (((_Bool)1) ? ((+(((1708625955) << (((((/* implicit */int) (_Bool)1)) - (1))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) > (0)))))))));
                            var_19 += ((/* implicit */signed char) (-((~(max((((/* implicit */unsigned int) var_7)), (var_3)))))));
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_5)), (var_3))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_2))))));
                            arr_28 [i_4] [i_5 - 1] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */int) arr_3 [i_4] [i_5] [i_4])) == (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)54240)))) > (((/* implicit */int) (_Bool)1))))));
                        }
                        var_20 *= ((/* implicit */_Bool) (unsigned char)0);
                    }
                }
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) min((((((_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (min((var_3), (var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
}
