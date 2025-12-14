/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138492
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
    var_18 = ((/* implicit */int) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [17] = ((/* implicit */short) max((6788298208953210063ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32756)), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [6] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32756)) < (((/* implicit */int) arr_6 [i_1]))))), (7617683298654428148ULL)));
                        var_19 |= ((/* implicit */unsigned char) var_16);
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3])) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_3]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_20 = ((/* implicit */unsigned short) 1293852495U);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(7617683298654428146ULL)))) ? (max((arr_14 [i_4]), (((/* implicit */int) var_12)))) : (((/* implicit */int) (((-(var_2))) == (arr_14 [i_4]))))));
        arr_15 [i_4] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])) & (max((((/* implicit */unsigned long long int) -70368744177664LL)), (7617683298654428146ULL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), ((unsigned short)49231)))) ? (max((((/* implicit */unsigned long long int) arr_14 [i_4])), (8583091857153818561ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    var_22 = max((((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (max((arr_16 [i_5] [i_5]), (((/* implicit */unsigned int) (signed char)-20)))))));
                    var_23 |= ((/* implicit */long long int) max((524287U), (((/* implicit */unsigned int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_19 [i_4] [i_4] [11U])))) ? (max((((/* implicit */long long int) (unsigned short)512)), (arr_13 [i_4] [i_4]))) : ((~(max((var_15), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
        arr_20 [i_4] = arr_17 [i_4];
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_25 ^= var_15;
        arr_23 [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                {
                    arr_31 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_24 [i_7] [i_9 + 2]);
                    arr_32 [i_7] [10] [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -911339196973797661LL)) ? (((/* implicit */long long int) 745930026)) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_18 [i_9 + 2])) : (((/* implicit */int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_8]))))))))), (max((7617683298654428157ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    arr_33 [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    }
    var_26 += (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
    var_27 = ((/* implicit */unsigned int) var_12);
}
