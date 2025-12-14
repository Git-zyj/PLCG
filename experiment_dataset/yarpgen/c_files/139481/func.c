/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139481
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) (((~(arr_2 [i_1 - 3]))) ^ (((arr_2 [i_0 + 2]) ^ (arr_2 [i_0 + 2])))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 729154752)) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) 7271190351934222580ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-(arr_1 [i_0 - 2])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        arr_7 [i_2 - 1] [i_2 - 1] = ((/* implicit */long long int) -1956151669);
        arr_8 [i_2] [7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)65)) && (((((/* implicit */int) (_Bool)1)) != (-464484004)))));
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 2]))) < (3122108107U)));
        var_14 &= arr_5 [i_2 + 1] [i_2 + 2];
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        var_15 += ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_12 [i_3])) : (-1956151654)))) != (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (7109208203818620328ULL) : (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_3 - 1])))));
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_3]))))));
        arr_15 [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11825)) | (729154756)));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    var_16 = 5417289473889143315LL;
                    arr_22 [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */_Bool) arr_10 [i_3]);
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_12 [(unsigned short)0])))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((unsigned long long int) 7939859855280474735ULL)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-3)), (arr_11 [i_6] [i_6])))))))));
    }
    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                for (unsigned short i_10 = 3; i_10 < 10; i_10 += 4) 
                {
                    {
                        arr_35 [i_7 - 1] = ((/* implicit */_Bool) max((((arr_33 [i_7] [i_7] [i_10]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_16 [i_7] [i_7])))))))));
                        arr_36 [i_7 + 2] [(unsigned char)6] [i_9] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)57755))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-((~(((/* implicit */int) var_7))))))), ((-(max((((/* implicit */unsigned int) (unsigned char)254)), (2947895539U)))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51714))) : (4796902895935357166ULL)))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) max(((unsigned short)19566), (((/* implicit */unsigned short) (unsigned char)210)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)12651)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2])) && (((/* implicit */_Bool) var_1)))))))) < (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_7] [i_7 + 1])))))))));
    }
}
