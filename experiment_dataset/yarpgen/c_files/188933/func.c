/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188933
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [(unsigned short)4] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(_Bool)1]))))))) * ((+(max((13459568129284634367ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_18 -= (_Bool)1;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) | ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_15))))))) == (5LL));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_5 [8LL]), (arr_5 [2ULL])))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_17 [i_4 + 3] [i_4 + 3] [i_1] [i_4 - 1] [4U] [i_4 + 3] = ((/* implicit */_Bool) var_5);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_4 + 3] [i_1] [i_1]))))) & ((~(arr_10 [i_1] [i_1] [i_3])))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_12 [i_1]))));
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_4 + 1])) % (((/* implicit */int) (unsigned short)21084))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((arr_8 [2LL]) ^ (arr_8 [10U]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_30 [i_5] [i_6] [i_6] [12ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_5] [i_6] [i_7] [i_8]))));
                        arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((var_5), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)13)))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) min((arr_20 [i_5] [i_5]), (((/* implicit */unsigned int) (_Bool)1))));
        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((((/* implicit */int) arr_19 [i_5])) | (((/* implicit */int) arr_19 [i_5])))) : (((((/* implicit */_Bool) 1253899722U)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5]))))));
        arr_32 [i_5] [i_5] = ((/* implicit */unsigned char) var_0);
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            for (long long int i_10 = 4; i_10 < 18; i_10 += 1) 
            {
                {
                    arr_39 [i_10] [i_9 - 1] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) arr_37 [i_5] [i_9] [i_5]))) ? (((((/* implicit */_Bool) -996216125238504718LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10 + 2] [i_5]))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)11)))) ? (((/* implicit */long long int) 1671507006)) : (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) arr_23 [i_5] [i_9 - 1] [i_10 - 4])) : (858527174237566070LL))))))));
                    arr_40 [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_35 [i_5] [i_10 - 3])) ? (14690250186026747641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44462)))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)51))))) % (9759482108805082397ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2))))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    var_26 *= ((/* implicit */_Bool) var_14);
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) > (858527174237566070LL))))));
}
