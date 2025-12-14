/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123187
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(var_9)))));
                        var_16 = ((/* implicit */unsigned char) (~(-396379825)));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0]))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 986035662281508534LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)18050)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)255)) < (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)2047)))), (((/* implicit */int) ((-1913744632849905412LL) == (-986035662281508535LL))))))) ? ((+(((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) (short)-19716)))))));
        var_19 = ((/* implicit */unsigned short) ((((arr_8 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((3872730853U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44695)))))))) == (((((((/* implicit */int) (unsigned char)62)) | (((/* implicit */int) (unsigned short)57166)))) % ((~(((/* implicit */int) (unsigned short)33287))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) | (12487264348021517205ULL)))));
        arr_16 [i_4] = ((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4]);
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19716))))) & (((arr_0 [i_4]) ^ (arr_0 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) 1152921504338411520LL);
        arr_20 [i_5] = ((/* implicit */unsigned char) arr_14 [i_5] [i_5]);
        arr_21 [i_5] = ((/* implicit */unsigned char) arr_18 [14U]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [i_5]) ? (4350007912481872122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8386)) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_1 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 5521806533709003575ULL)) && ((_Bool)1))))))) : (((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)32), (((/* implicit */unsigned short) arr_8 [i_5] [12ULL] [12ULL] [i_5])))))) : (arr_18 [i_5])))));
    }
    var_22 = ((/* implicit */_Bool) var_5);
}
