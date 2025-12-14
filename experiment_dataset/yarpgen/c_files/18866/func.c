/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18866
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
    var_11 = (!(((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))))));
    var_12 = ((/* implicit */short) max(((-((~(var_3))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_0)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [15ULL] [i_0] = (~(max((max((((/* implicit */unsigned long long int) var_4)), (var_2))), ((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_13 = var_10;
            arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_1])))) != (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (short)-14292)) : (((/* implicit */int) var_1))))) != ((~(18183568953073747460ULL)))))));
                            var_14 = ((/* implicit */signed char) ((min((arr_13 [i_0] [i_1]), (arr_13 [i_1] [i_1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_1])))))));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_15 *= ((/* implicit */int) arr_6 [(_Bool)0] [(unsigned char)6]);
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                        }
                        var_16 = ((/* implicit */unsigned char) var_10);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)-32745)), (-1959415718))) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))))) : (((int) arr_1 [i_1] [i_1]))));
                        arr_19 [i_0] [i_1] [i_1] [(short)5] = ((/* implicit */unsigned long long int) ((((_Bool) var_7)) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) > (arr_13 [i_0] [i_1]))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 4; i_8 < 22; i_8 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((signed char) (short)-32745)))));
                    var_19 = ((/* implicit */short) arr_24 [i_6] [i_7] [i_8]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_31 [i_10] [i_9])))));
                        var_21 = ((/* implicit */unsigned char) ((arr_20 [i_6] [i_6]) & (((unsigned long long int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)67))))));
                        arr_32 [i_6] [i_10] [i_10] [i_11] [i_9] [i_6] = ((/* implicit */signed char) (-(var_0)));
                    }
                } 
            } 
        } 
        var_22 ^= var_0;
        arr_33 [i_6] [i_6] &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (var_2))) ? (arr_22 [(unsigned char)15] [(unsigned char)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
    }
    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        arr_37 [i_12] [i_12] = (!(((/* implicit */_Bool) min((var_1), (((/* implicit */short) arr_29 [i_12] [i_12]))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_26 [i_12] [i_12] [i_12]), (arr_26 [i_12] [i_12] [i_12])))) < (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_29 [i_12] [i_12])) : ((~(((/* implicit */int) arr_23 [i_12]))))))));
        var_24 = min((max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_4)) ? (196608) : (((/* implicit */int) (short)-14281)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-30287), (((/* implicit */short) (signed char)120)))))))));
        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned long long int i_13 = 3; i_13 < 21; i_13 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_6))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
        {
            arr_42 [i_14] = ((_Bool) (-(-1850021457)));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(var_6))))));
            arr_43 [i_13 - 2] [i_14] = ((unsigned long long int) var_8);
        }
        for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
        {
            arr_46 [i_13] [(unsigned char)6] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            arr_47 [i_13 - 1] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4436864164852191881ULL) : (((/* implicit */unsigned long long int) ((arr_30 [i_13] [i_15]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) 263175120635804147ULL)) ? (10698793170541261279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
}
