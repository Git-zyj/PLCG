/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139860
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)49938);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 = ((((min(((~(((/* implicit */int) (unsigned char)123)))), (arr_7 [i_0]))) + (2147483647))) >> ((((~(955273542101636930LL))) + (955273542101636958LL))));
                    arr_11 [(unsigned short)11] [i_1 + 1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49990))) == ((-(4002122441U))))))));
                    arr_12 [(unsigned short)17] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned short)4183)) : (((/* implicit */int) (short)-5722)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_13 [i_3] [i_3] [i_3])))));
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (max((((/* implicit */unsigned short) (short)-14338)), (var_7))))))) == ((~(arr_14 [i_0] [i_0] [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 16; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            arr_27 [i_6] [i_5] = ((/* implicit */unsigned short) arr_2 [i_7 + 1]);
                            arr_28 [i_5] [i_5] [i_6] [7LL] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_26 [i_6] [i_5] [i_5])) ? (-955273542101636928LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15548))))))) ? (max((((/* implicit */unsigned long long int) min(((unsigned short)49990), (((/* implicit */unsigned short) (unsigned char)123))))), (arr_20 [(unsigned char)17] [i_0] [(unsigned char)17]))) : (max((var_10), (((/* implicit */unsigned long long int) (short)5483))))));
                            var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_9))))))), (min(((+(2547820562U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
                            arr_29 [i_0] [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((955273542101636925LL), (-955273542101636951LL)))) ? (max((((/* implicit */long long int) var_2)), (arr_8 [(signed char)17] [i_8]))) : (((/* implicit */long long int) ((int) var_10)))))) > (((var_1) & (((/* implicit */unsigned long long int) (~(var_11))))))));
                            var_17 = ((/* implicit */int) var_3);
                        }
                        var_18 = ((/* implicit */int) ((((((-7011222344573936425LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15548))))) ? (((/* implicit */long long int) max((arr_7 [i_6]), (((/* implicit */int) (unsigned short)50002))))) : (max((((/* implicit */long long int) var_11)), (arr_13 [i_0] [i_0] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) max((max(((unsigned short)15546), ((unsigned short)15525))), (((/* implicit */unsigned short) arr_22 [i_0] [i_6] [i_7]))))))));
                        var_19 = ((min((9186962863778477161LL), (arr_0 [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)49990), ((unsigned short)50002))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44069))) : (arr_13 [i_0] [i_0] [i_5])))) >= (max((((/* implicit */unsigned long long int) (unsigned char)2)), (arr_20 [i_5] [i_5] [i_0]))))))) - (7011222344573936425LL)));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_32 [2LL] [i_9] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 40355798)) / (4766694103501050698LL)))), ((+(var_10)))))));
        arr_33 [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-5701))) || (((/* implicit */_Bool) min((3935661197141172515LL), (((/* implicit */long long int) 25165824U)))))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_9]), (arr_30 [i_9]))))) ^ (((((/* implicit */long long int) 2599187774U)) ^ (arr_31 [i_9])))))));
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_5);
    }
}
