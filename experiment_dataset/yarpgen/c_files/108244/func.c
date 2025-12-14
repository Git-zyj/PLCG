/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108244
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
    var_15 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((((/* implicit */int) var_9)) + (2147483647))) >> (15U))), (min((var_4), (var_5)))))), (var_11)));
    var_16 = ((/* implicit */short) min((var_13), (((/* implicit */long long int) min((((int) -9105043536062851268LL)), (((/* implicit */int) ((unsigned short) 2999395455U))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((min((max((var_12), (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) ((int) var_2))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -3249384886549941911LL)) ? (876214335U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))))) & (((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))))))));
        var_18 -= ((/* implicit */unsigned char) max((302432221605997674ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) || (((/* implicit */_Bool) (unsigned char)220))))), (var_4))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2])))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((unsigned short) -6924525630662768590LL));
                            var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55688))) : (16777215LL)));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (signed char)12)))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) (((+(-8643816270693646222LL))) >= (var_12)));
            var_24 |= ((/* implicit */int) arr_6 [i_1] [i_1]);
            var_25 &= ((/* implicit */_Bool) -1);
        }
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_6 - 1] [16LL]))));
            var_27 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18488))) : (var_11))) * ((((_Bool)0) ? (2538858728516392342LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36996)))))));
        }
        var_28 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
        var_29 = ((/* implicit */int) var_1);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_0))));
                    var_31 = var_11;
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2999395443U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-18472)))))) % (((/* implicit */int) (signed char)2))));
                    var_33 = ((/* implicit */signed char) (unsigned char)135);
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_34 &= ((/* implicit */unsigned int) ((((((arr_24 [(short)18] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) << (((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9]))))) - (844529213933466029LL))))) * (min((min((767479717063126686ULL), (((/* implicit */unsigned long long int) arr_13 [i_9] [i_9] [i_9] [i_9])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
        var_35 = ((/* implicit */unsigned char) (+(max(((~(((/* implicit */int) var_2)))), (max((arr_0 [i_9] [i_9]), (((/* implicit */int) var_2))))))));
    }
    var_36 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2))))))));
    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) min((min((16917378244686350734ULL), (((/* implicit */unsigned long long int) (unsigned short)50625)))), (((/* implicit */unsigned long long int) 255U)))))));
}
