/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150664
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
    var_15 = ((/* implicit */long long int) var_14);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)30))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_9 [15LL] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_2] [i_0])), (((long long int) arr_8 [i_0] [6U] [6U] [i_2]))))), (((unsigned long long int) max((((/* implicit */int) (unsigned char)30)), (arr_2 [9] [i_1]))))));
                var_16 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((767105921) % (((/* implicit */int) (unsigned char)30)))))))));
                var_17 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)45381)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (-767105922) : (((/* implicit */int) (unsigned char)36))))))) << (((((-192565556999943753LL) | (((/* implicit */long long int) 424073666U)))) + (192565556726998584LL)))));
            }
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_4] [(unsigned char)5] [i_5] = min((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (3870893629U))), (((/* implicit */unsigned int) ((arr_10 [i_0] [i_0]) | (arr_10 [i_0] [i_0])))));
                            var_18 -= 3870893629U;
                            arr_19 [i_5] [i_3] [10U] &= ((((/* implicit */_Bool) (short)32760)) ? (-572004118) : (((/* implicit */int) (unsigned char)241)));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (-572004118) : (((/* implicit */int) arr_21 [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(3870893629U)))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) ((_Bool) -8689649216798468489LL)))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-103)) | (((/* implicit */int) (signed char)33))))), (-8433681704837074251LL)))));
        var_19 = max((767105908), (((/* implicit */int) (unsigned char)45)));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)116)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_7] [i_7]), (arr_13 [i_7] [i_7]))))) : (((arr_8 [i_7] [i_7] [i_7] [i_7]) << (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            arr_30 [i_7] |= ((/* implicit */unsigned int) ((unsigned long long int) 528482304));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(max((arr_14 [i_7] [i_8] [i_8] [i_7] [i_8] [i_8] [i_8]), (arr_29 [i_7] [i_8]))))))));
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) & ((~(-807687746)))));
                            arr_38 [i_7] [(signed char)9] [i_7] = ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (short)25699)));
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) arr_31 [i_7] [i_7] [(_Bool)1] [i_7])) : (((/* implicit */int) arr_31 [i_7] [i_9] [i_10] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-94)))) : ((~(-8433681704837074251LL)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_12])) & (((/* implicit */int) arr_24 [i_7]))))) ? (max((arr_8 [i_12] [i_12] [i_12] [i_7]), (arr_8 [i_7] [i_12] [i_12] [8U]))) : (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */unsigned int) -455077301)) : (arr_8 [i_12] [i_12] [i_12] [i_12])))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    {
                        arr_48 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_17 [i_7] [i_12])), (var_7)))) ? (((6ULL) * (((/* implicit */unsigned long long int) -8689649216798468489LL)))) : (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */unsigned long long int) 8433681704837074248LL)) : (7ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_7])))))));
                        arr_49 [i_7] [i_12] [i_12] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(8ULL))), (((((/* implicit */_Bool) 2007296833U)) ? (1144141207778697585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9037)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_7] [i_12] [i_13] [i_14]))) : (var_8)));
                    }
                } 
            } 
        }
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        arr_52 [i_15] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)21586)), (0ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_53 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-94)) - (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_51 [i_15]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)658)) ? (((/* implicit */unsigned long long int) 4294967286U)) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64877)) * (((/* implicit */int) arr_50 [i_15] [i_15])))))))));
        arr_54 [i_15] = ((/* implicit */unsigned short) ((unsigned char) (~(10415149574192754145ULL))));
    }
    var_24 = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) (short)30081)))) <= (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_10))))))));
    var_25 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */int) min(((unsigned short)63000), (((/* implicit */unsigned short) (signed char)24))))) : (((/* implicit */int) ((_Bool) (unsigned char)84))))) : (((/* implicit */int) var_5)));
}
