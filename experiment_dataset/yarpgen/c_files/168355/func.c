/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168355
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3869078876094432735ULL))))), ((+(14577665197615118880ULL)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */int) ((12809061912830663270ULL) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(arr_5 [i_3] [i_2 + 1] [i_2 + 1])))), (max((0LL), (((/* implicit */long long int) var_4)))))))));
                            var_15 |= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? ((((_Bool)0) ? (8108618624464253971ULL) : (((/* implicit */unsigned long long int) var_1)))) : ((-(5481824005552537208ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (72057594037927936LL)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) min((arr_15 [i_0] [6LL] [i_0] [6LL]), (((/* implicit */unsigned char) (_Bool)0)))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((5637682160878888345ULL), (((/* implicit */unsigned long long int) 255284590))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)82)))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (-(-1LL)))) : (max((8413446302663318240ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6499)) | ((+(((/* implicit */int) arr_14 [i_0] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 4; i_8 < 11; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                            var_22 |= ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(arr_0 [i_7 + 1]))))));
        }
        var_24 = ((((/* implicit */int) (_Bool)0)) != ((-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))))));
    }
    for (long long int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((long long int) -396213950));
        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((-5993025056612456589LL) % (((/* implicit */long long int) ((/* implicit */int) (short)19076)))))), ((~(5637682160878888345ULL)))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [(signed char)10] [i_11] [10]))))) ? (((/* implicit */int) (signed char)-107)) : (((((/* implicit */int) arr_22 [i_11] [(short)12] [0ULL] [i_11])) / (((/* implicit */int) (short)-22724)))))))));
        var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11] [i_11]))))));
    }
    for (long long int i_12 = 2; i_12 < 23; i_12 += 3) 
    {
        var_29 &= ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)157)))), (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            for (long long int i_14 = 3; i_14 < 24; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_30 |= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_39 [18U] [6ULL]))))) <= (-1117926600435598922LL))))));
                        var_31 = ((/* implicit */int) (unsigned short)28143);
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((12809061912830663270ULL) - (12809061912830663270ULL)))) ? ((-(max((((/* implicit */unsigned long long int) 4LL)), (var_8))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)243))))))))))));
    }
    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
}
