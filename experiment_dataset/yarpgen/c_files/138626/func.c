/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138626
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((4429045690460289358LL), (3283666175498611159LL)))) | (min((((/* implicit */unsigned long long int) (signed char)125)), (5105496202933317021ULL)))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) % ((~(5105496202933317023ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)77)) | (((/* implicit */int) (short)-32751)))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) -5205310383675615724LL)) != (6073479894725873133ULL)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) (((~(13408700988920404745ULL))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-32751)), (534773760U))))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) var_2);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2274810559U)) ? (6073479894725873127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_16 [i_2] [i_3] [i_3] = ((/* implicit */short) ((13341247870776234594ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))));
            arr_17 [i_2] = 10824971950673938129ULL;
            arr_18 [i_2] [i_3] [i_3] = (short)32767;
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            arr_21 [i_2] [i_4] [(signed char)7] = ((/* implicit */short) 12373264178983678488ULL);
            arr_22 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (signed char)42)) - (40)))));
        }
        arr_23 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(229310315)))), (min((5205310383675615729LL), (((/* implicit */long long int) (short)255))))))), (((12373264178983678488ULL) << (((var_9) - (7980947031410196252LL)))))));
        arr_24 [i_2] = min((((/* implicit */unsigned long long int) 966331740U)), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)118)), (608263628U)))), (min((16707316117393265686ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
        arr_25 [i_2] = ((/* implicit */unsigned long long int) (short)-32767);
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_28 [i_5] [i_5] = ((/* implicit */short) (~(((/* implicit */int) min(((signed char)-31), ((signed char)-58))))));
        arr_29 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (-250563343)))), (var_5))))));
        arr_30 [i_5] [i_5] = ((/* implicit */unsigned int) min((-3226274722742598378LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2745494287737246535ULL)))) ? (966331746U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        arr_37 [i_5] = ((/* implicit */int) (((~(2745494287737246535ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)7981), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8874288802934854621LL)) || (((/* implicit */_Bool) var_0)))))))))));
                        arr_38 [i_6] [i_6] [i_6] [i_5] [i_6] = (signed char)64;
                    }
                } 
            } 
            arr_39 [i_5] [i_6] [i_6] = ((/* implicit */int) max(((signed char)62), (((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned short)20508), ((unsigned short)2552)))))))));
        }
        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (unsigned short i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    {
                        arr_47 [i_11] [i_11] [i_11] [(signed char)2] [i_5] [i_11 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3328635555U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39407))) > (10824971950673938121ULL))))) : (max((((/* implicit */unsigned long long int) (unsigned short)51481)), (12401972188695974310ULL))))))));
                        arr_48 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_2)))) ? ((-(((/* implicit */int) (unsigned short)7982)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)25687)) == (((/* implicit */int) (signed char)6)))))));
                        arr_49 [i_5] [i_5] [i_9] [i_10] [i_11 - 1] = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)64)) >> (((15499429651581388645ULL) - (15499429651581388634ULL))))), (((/* implicit */int) ((18446744073709551615ULL) != (min((10824971950673938121ULL), (((/* implicit */unsigned long long int) 566543283U)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        arr_56 [2LL] [i_5] [i_12] [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */int) ((566543283U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))) % (((/* implicit */int) (short)3669)))))));
                        arr_57 [i_5] [i_5] [i_5] [i_5] [(unsigned short)12] = ((/* implicit */_Bool) -1636768527);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        arr_63 [6LL] [i_5] [i_5] = ((/* implicit */short) (signed char)13);
                        arr_64 [i_5] [i_9] [i_14] [i_5] [(unsigned short)7] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) 1919880337)), (-6833862876077587619LL)))));
                        arr_65 [i_5] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6)) && (((/* implicit */_Bool) (unsigned short)57555))));
                        arr_66 [i_5] [(short)6] [i_9] [i_5] [i_15] [i_15] = ((/* implicit */unsigned short) 296398437);
                        arr_67 [i_5] [i_5] [3LL] [i_14] [i_5] [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((short)11), (((/* implicit */short) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (short)-14881)))))))) | (((/* implicit */int) (short)16368))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 13; i_18 += 4) 
                {
                    {
                        arr_75 [i_5] [10ULL] = ((/* implicit */unsigned short) var_2);
                        arr_76 [6U] [i_5] [i_16] [i_5] [i_18] = ((/* implicit */short) var_0);
                        arr_77 [i_5] [i_5] [i_5] [i_16] [i_5] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2225923332U))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_19 = 3; i_19 < 10; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_21 = 0; i_21 < 14; i_21 += 4) 
                        {
                            arr_84 [i_5] [i_19] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            arr_85 [i_19] [i_5] [i_20] [i_20] [i_21] [3U] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-95)) && (((/* implicit */_Bool) 747226791U))));
                            arr_86 [i_5] [i_16] [i_5] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63333)) > (((/* implicit */int) (signed char)61))));
                            arr_87 [i_5] [(short)10] [i_19] [i_16] [i_5] = ((/* implicit */unsigned int) 15701249785972305081ULL);
                        }
                        for (short i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            arr_92 [i_5] [i_5] [i_5] [i_20] [i_22] = ((/* implicit */signed char) -135663731743687221LL);
                            arr_93 [i_5] [i_5] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) && ((!(((/* implicit */_Bool) (short)-15090))))));
                        }
                        arr_94 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            arr_95 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49599))) & (10720658950076643337ULL)));
        }
    }
    var_11 = 3166150072368418502ULL;
}
