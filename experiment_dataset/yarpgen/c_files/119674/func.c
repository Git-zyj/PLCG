/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119674
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned char)123)))) >= (var_3)))) % (((((/* implicit */_Bool) (-(var_5)))) ? ((~(var_5))) : ((-(((/* implicit */int) (signed char)96))))))));
    var_20 = ((/* implicit */long long int) (-((~((-2147483647 - 1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */int) var_12);
                arr_6 [(_Bool)1] |= ((/* implicit */unsigned int) ((2147483647) < (((((/* implicit */int) arr_1 [i_0])) + (((((/* implicit */int) var_13)) / (((/* implicit */int) var_16))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_20 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((+(((/* implicit */int) var_7)))) == ((+(var_9)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3] [i_3])) | (((/* implicit */int) var_15))))) : (max((((/* implicit */long long int) 2147483647)), (-3185893885371225161LL)))))));
                        arr_21 [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) var_18);
                    }
                } 
            } 
        } 
        arr_22 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
        arr_23 [i_2] = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)30))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 67092480U)) ? ((~(arr_25 [(_Bool)1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned short)59226)) : (((/* implicit */int) (signed char)55)))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned char) var_10);
                        arr_37 [i_6] [i_7] [(_Bool)1] [i_9] &= arr_36 [i_9] [i_8] [i_7] [i_7] [i_7] [i_6 - 1];
                        arr_38 [i_7] [i_7] [(unsigned short)7] = ((992861860U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
                        arr_39 [i_6] [i_6 - 1] [i_6] [i_6] [i_6] = ((/* implicit */int) (+(var_2)));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) (-(arr_33 [i_6] [8U] [i_6] [i_6] [i_6])));
    }
    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_25 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min(((+(var_9))), ((+(((/* implicit */int) (unsigned char)7)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                for (unsigned short i_13 = 3; i_13 < 16; i_13 += 2) 
                {
                    {
                        arr_50 [i_11] [i_12] [(signed char)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_45 [i_11] [i_11])), (var_17))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))) ? (arr_29 [i_11 - 1]) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_10] [i_11] [i_13])) || (((/* implicit */_Bool) (signed char)-20))))))))));
                        arr_51 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) : (4294967274U)));
                        arr_52 [13LL] [i_10] [i_11] [(unsigned short)15] [i_12] [4U] = ((/* implicit */unsigned char) ((2882079118U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59244)))));
                    }
                } 
            } 
        } 
    }
}
